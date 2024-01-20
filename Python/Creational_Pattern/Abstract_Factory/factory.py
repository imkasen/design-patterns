"""
Factory
"""
from abc import ABC, abstractmethod

from product_a import AbstractProductA, ConcreteProductA1, ConcreteProductA2
from product_b import AbstractProductB, ConcreteProductB1, ConcreteProductB2

# pylint: disable=C0116


class AbstractFactory(ABC):
    """
    抽象工厂接口声明了一组返回不同抽象产品的方法。这些产品被称为一个系列，它们由一个高层次的主题或概念相关联。
    同一系列的产品通常能够相互协作。
    一个产品系列可能有几个变体，但一个变体的产品与另一个变体的产品是不兼容的。
    """

    @abstractmethod
    def create_product_a(self) -> AbstractProductA:
        pass

    @abstractmethod
    def create_product_b(self) -> AbstractProductB:
        pass


class ConcreteFactory1(AbstractFactory):
    """
    具体工厂生产属于单个变体的产品系列。工厂保证生成的产品是兼容的。
    请注意，具体工厂方法的签名返回一个抽象产品，而在方法内部实例化一个具体产品
    """

    def create_product_a(self) -> AbstractProductA:
        return ConcreteProductA1()

    def create_product_b(self) -> AbstractProductB:
        return ConcreteProductB1()


class ConcreteFactory2(AbstractFactory):
    """
    每个具体工厂都有对应的产品变体。
    """

    def create_product_a(self) -> AbstractProductA:
        return ConcreteProductA2()

    def create_product_b(self) -> AbstractProductB:
        return ConcreteProductB2()
