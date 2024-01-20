"""
Abstract Factory
"""
from factory import AbstractFactory, ConcreteFactory1, ConcreteFactory2

# pylint: disable=W0105


def client_code(factory: AbstractFactory) -> None:
    """
    客户端代码只通过抽象类型 AbstractFactory 和 AbstractProduct 与工厂和产品进行交互。
    这使得您可以将任何工厂或产品的子类传递给客户端代码而不会破坏它。
    """
    product_a = factory.create_product_a()
    product_b = factory.create_product_b()

    print(f"{product_b.useful_function_b()}")
    print(f"{product_b.another_useful_function_b(product_a)}", end="")


if __name__ == "__main__":
    """
    客户端代码可以与任何具体工厂类一起使用。
    """
    print("Client: Testing client code with the first factory type:")
    client_code(ConcreteFactory1())

    print("\n")

    print("Client: Testing the same client code with the second factory type:")
    client_code(ConcreteFactory2())
