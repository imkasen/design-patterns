"""
Product B
"""
from abc import ABC, abstractmethod

from product_a import AbstractProductA

# pylint: disable=C0115, C0116, R0903, W0105


class AbstractProductB(ABC):
    """
    这是另一个产品的基本接口。所有产品可以相互交互，但是只有相同具体变体的产品之间才能进行适当的交互。
    """

    @abstractmethod
    def useful_function_b(self) -> None:
        """
        产品 B 能够独立进行自身的操作...
        """
        # pass

    @abstractmethod
    def another_useful_function_b(self, collaborator: AbstractProductA) -> None:
        """
        ...但它也可以与产品 A 进行合作。
        抽象工厂确保它创建的所有产品都是相同的变体，因此是兼容的。
        """
        # pass


"""
具体产品是由对应的具体工厂创建的。
"""


class ConcreteProductB1(AbstractProductB):
    def useful_function_b(self) -> str:
        return "The result of the product B1."

    """
    变体产品 B1 只能与变体产品 A1 正确地配合工作。然而，它接受抽象产品 A 的任何实例作为参数。
    """

    def another_useful_function_b(self, collaborator: AbstractProductA) -> str:
        result: str = collaborator.useful_function_a()
        return f"The result of the B1 collaborating with the ({result})"


class ConcreteProductB2(AbstractProductB):
    def useful_function_b(self) -> str:
        return "The result of the product B2."

    def another_useful_function_b(self, collaborator: AbstractProductA):
        """
        变体产品 B2 只能与变体产品 A2 正确地配合工作。然而，它接受抽象产品 A 的任何实例作为参数。
        """
        result: str = collaborator.useful_function_a()
        return f"The result of the B2 collaborating with the ({result})"
