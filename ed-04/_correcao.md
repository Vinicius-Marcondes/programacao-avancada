- Este método é extremamente perigoso. Vc está sobrescrevendo seu ponteiro que foi alocado dinamicamente, e quem vai desalocar o ponteiro original?

```
    void setContas(Conta **contas) {
        Banco::_contas = contas;
    }

```
