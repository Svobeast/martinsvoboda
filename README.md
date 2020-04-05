# martinsvoboda

## task 01
Upravte odsazení ve funkci main. `toUpper()` má vracet `char*`, místo toho vracíte 0, pak se volá `puts(0)` ve funkci main. To je nedefinované chování, které může skončit chybou. Přepište funkci `toUpper()` tak, aby sama nic netiskla, pouze vracela řetězec, který se pak vypíše pomocí `puts()`. Tímto způsobem pak můžeme použít funkci i pro zápis do souboru: `fputs(toUpper(input), fd)`
MS: Hotovo

## task 03
Interaktivní část vložte do funkce, podobně vytvořte funkce pro další parametry. V mainu ponechte pouze detekci argumentů a volání funkcí pro interaktivní, couborový či klávesnicový vstup.
MS: Zatím jsem nepracoval na task03
 
## task 04
MS: Hotovo, funguje, snad dobře

## hra
MS: hra funguje, rozumím tomu jen trošku. Pomáhal mi spolužák

## task06

Dependency inversion principle chápu tak že větší důležitější classy nesmí záviset na menších méně důležitých classách.

