package simplefactory

type Producter interface {
	Use() string
}

type concreteProductA struct{}

func (*concreteProductA) Use() string {
	return "Use of product A"
}

type concreteProductB struct{}

func (*concreteProductB) Use() string {
	return "Use of product B"
}

type Factory struct{}

func (*Factory) CreateProduct(name string) Producter {
	if name == "A" {
		return &concreteProductA{}
	} else if name == "B" {
		return &concreteProductB{}
	}
	return nil
}
