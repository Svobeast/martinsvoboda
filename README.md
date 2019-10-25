# martinsvoboda

## task 01
Upravte odsazení ve funkci main. `toUpper()` má vracet `char*`, místo toho vracíte 0, pak se volá `puts(0)` ve funkci main. To je nedefinované chování, které může skončit chybou. Přepište funkci `toUpper()` tak, aby sama nic netiskla, pouze vracela řetězec, který se pak vypíše pomocí `puts()`. Tímto způsobem pak můžeme použít funkci i pro zápis do souboru: `fputs(toUpper(input), fd)`