# YAML and JSON

## Table of Contents

- [YAML](#yaml)
- [JSON](#json)

## YAML

Key-Value pair syntax:

```yaml
Fruit: Apple
Vegetable: Carrot
Liquid: Water
Meat: Chicken
```

Array/List syntax:

```yaml
Fruits:
	- Orange
	- Apple
	- Banana

Vegetables:
	- Carrot
	- Cauliflower
	- Brocolli
```

Dictionary/Map syntax:

```yaml
Banana:
	Calories: 1
	Fat: 2 g
	Carbs: 27 g

Grapes:
	Calories: 1
	Fat: 2 g
	Carbs: 3 g
```

# JSON

JSON is just like JavaScript syntax.

Additional notes:

- A dollar symbol denotes the root.
- Results are encapsulated in an array.

For specifying a criteria in an array:

```json
$[?(@>40)]
```

The code above queries the list and check if (`?`) each (`@`) item in the array is greater than 40 (`>40`).

For criteria in dictionaries:

```json
$.car.wheels[?(@.location == "rear-right")].model
```
