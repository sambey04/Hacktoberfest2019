from abc import ABC, abstractmethod, abstractproperty

class Builder:
    # Builder interface

    @abstractproperty
    def system(self):
        pass

    @abstractmethod
    def addMemory(self, size):
        pass
    
    @abstractmethod
    def addHDD(self, size):
        pass
    
    @abstractmethod
    def addKeyBoard(self, size):
        pass
    
    @abstractmethod
    def addTouchscreen(self, size):
        pass


class LaptopBuilder(Builder):
    #first ConcreteBuilder

    def __init__(self):
        self._system = System()

    @property
    def system(self):
        return self._system

    def addMemory(self, size):
        self.system.memory = size

    def addHDD(self, size):
        self.system.HDD = size

    def addKeyboard(self, kbtype):
        self.system.keyboard = kbtype

    def addTouchscreen(self, enabled):
        self.system.touchscreen = enabled

    
class DesktopBuider(Builder):
    # second ConcreteBuilder

    def __init__(slef):
        self._system = System()
        self.memory = None

    @property
    def system(self):
        return self._system

    def addMemory(self, size):
        self.system.memory = size

    def addHDD(self, size):
        self.system.HDD = size

    def addKeyboard(self, kbtype):
        self.system.keyboard = kbtype

    def addTouchscreen(self, enabled):
        return


class Director:
    def __init__(self):
        self._builder = None

    @property
    def builder(self):
        return self._builder

    @property.setter
    def builder(self, b):
        self._builder = b

    def build_system(self, builder, kv):
        builder.addMemory(kv['memory'])
        builder.addHDD(kv['hdd'])
        builder.addKeyboard(kv['keyboard'])
        builder.addTouchscreen(kv['touchscreen'])


class System:
    # the end product

    def __str__(self):
        return 'Memory:%s, HDD:%s , Keyboard Type:%s, Touchscreen:%s' % (self.memory,
                                                                         self.HDD,
                                                                         self.keyboard,
                                                                         self.touchscreen)

    @property
    def memory(self):
        return self.memeory
    
    @property
    def HDD(self):
        return self.HDD
    
    @property
    def keyboard(self):
        return self.keyboard
    
    @property
    def touchscreen(self):
        return self.touchscreen



if __name__ == '__main__':
    laptopbuilder = LaptopBuilder()    
    director = Director()
    director.builder = laptopbuilder
    
    system_conf = {
        'memory': 12,
        'hdd': 512,
        'keyboard': 'portable',
        'touchscreen': True
    }

    director.build_system(laptopbuilder, system_conf)
    print(laptopbuilder.system)
