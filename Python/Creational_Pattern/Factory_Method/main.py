"""
Factory Method
"""
from creator import ConcreteCreator1, ConcreteCreator2, Creator


def client_code(creator: Creator) -> None:
    """
    客户端代码通过 ConcreteCreator 类的实例来工作，尽管是通过其基础接口。
    只要客户端继续通过基础接口与 Creator 类交互，就可以传递任何 Creator 类的子类给它。
    """

    print(f"Client: I'm not aware of the creator's class, but it still works.\n" f"{creator.some_operation()}", end="")


if __name__ == "__main__":
    print("App: Launched with the ConcreteCreator1.")
    client_code(ConcreteCreator1())
    print("\n")

    print("App: Launched with the ConcreteCreator2.")
    client_code(ConcreteCreator2())
