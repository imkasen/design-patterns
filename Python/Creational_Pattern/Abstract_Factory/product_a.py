"""
Product A
"""

from abc import ABC, abstractmethod

# pylint: disable=C0115, C0116, R0903, W0105


class AbstractProductA(ABC):
    """
    每个产品系列的不同产品都应该有一个基本接口。产品的所有变体都必须实现这个接口。
    """

    @abstractmethod
    def useful_function_a(self) -> str:
        pass


"""
具体产品由相应的具体工厂创建。
"""


class ConcreteProductA1(AbstractProductA):
    def useful_function_a(self) -> str:
        return "The result of the product A1."


class ConcreteProductA2(AbstractProductA):
    def useful_function_a(self) -> str:
        return "The result of the product A2."
