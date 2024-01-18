"""
Product
"""
from abc import ABC, abstractmethod

# pylint: disable=W0105, C0115, C0116, R0903


class Product(ABC):
    """
    Product 接口声明了所有具体产品必须实现的操作。
    """

    @abstractmethod
    def operation(self) -> str:
        pass


"""
ConcreteProduct 类提供了 Product 接口的各种实现。
"""


class ConcreteProduct1(Product):
    def operation(self) -> str:
        return "{Result of the ConcreteProduct1}"


class ConcreteProduct2(Product):
    def operation(self) -> str:
        return "{Result of the ConcreteProduct2}"
