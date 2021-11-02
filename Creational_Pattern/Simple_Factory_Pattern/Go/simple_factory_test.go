package simplefactory

import "testing"

var fac_ptr = &Factory{}

func TestProductA(t *testing.T) {
	a := fac_ptr.CreateProduct("A")
	res := a.Use()
	if res != "Use of product A" {
		t.Fatal("Product A test fail")
	}
}

func TestProductB(t *testing.T) {
	b := fac_ptr.CreateProduct("B")
	res := b.Use()
	if res != "Use of product B" {
		t.Fatal("Product B test fail")
	}
}
