import gc
gc.collect()
import asyn
gc.collect()
import uasyncio as asyncio
gc.collect()
import pyb


async def foo(event, pin):
    pin.value(1)
    print('hello, foo!')
    await event
    print('hello, foo, again!')
    pin.value(0)
    event.clear()
    return 'foo'


async def bar(event):
    print('hello, bar!')
    await asyncio.sleep(2)
    event.set()
    print('bar finished!')
    return 'bar'

loop = asyncio.get_event_loop()
pin = pyb.Pin('D13', mode=pyb.Pin.OUT)
event = asyn.Event()
task = asyn.Gather([asyn.Gatherable(foo, event, pin), asyn.Gatherable(bar, event)])
loop.run_until_complete(task)
