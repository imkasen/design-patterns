"""
Creator
"""
from abc import ABC, abstractmethod

from product import ConcreteProduct1, ConcreteProduct2, Product

# pylint: disable=W0105, C0115


class Creator(ABC):
    """
    Creator 类声明了一个工厂方法，该方法应返回一个 Product 类的对象。Creator 的子类通常提供了该方法的实现。
    """

    @abstractmethod
    def factory_method(self):
        """
        请注意，Creator 类可能还会提供一些工厂方法的默认实现。
        """
        # pass

    def some_operation(self) -> str:
        """
        还要注意的是，尽管其名称如此，Creator 类的主要责任并不是创建产品。
        通常，它包含一些依赖于由工厂方法返回的 Product 对象的核心业务逻辑。
        子类可以通过重写工厂方法并从中返回不同类型的产品，从而间接改变该业务逻辑。
        """

        # 调用工厂方法来创建一个 Product 对象。
        product = self.factory_method()

        # 现在，使用这个产品。
        result: str = f"Creator: The same creator's code has just worked with {product.operation()}"

        return result


"""
ConcreteCreator 类重写工厂方法以改变生成的产品类型。
"""


class ConcreteCreator1(Creator):
    """
    请注意，尽管实际上从方法中返回 ConcreteProduct，但方法的签名仍然使用抽象的 Product 类型。
    这样，Creator 类可以保持独立于 ConcreteProduct 类。
    """

    def factory_method(self) -> Product:
        return ConcreteProduct1()


class ConcreteCreator2(Creator):
    def factory_method(self) -> Product:
        return ConcreteProduct2()
