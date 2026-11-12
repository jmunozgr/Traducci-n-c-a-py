productos_registrados = 0
productos_con_descuento = 0
total_compras = 0.0
total_pagado = 0.0

producto = input("Ingrese el nombre del producto (FIN para terminar): ")

while producto != "FIN":
    cantidad = int(input("Ingrese la cantidad: "))
    precio = float(input("Ingrese el precio unitario: "))
    
    productos_registrados += 1
    total_producto = cantidad * precio
    descuento = 0.0
    
    # Evaluación explícita del descuento
    if total_producto >= 100000.0:
        descuento = total_producto * 0.10
        productos_con_descuento += 1
    elif total_producto >= 50000.0:
        descuento = total_producto * 0.05
        productos_con_descuento += 1
        
    valor_final = total_producto - descuento
    
    print(f"\nProducto: {producto}")
    print(f"Valor original: ${total_producto:.2f}")
    print(f"Descuento aplicado: ${descuento:.2f}")
    print(f"Valor a pagar: ${valor_final:.2f}")
    
    total_compras += total_producto
    total_pagado += valor_final
    
    producto = input("\nIngrese el nombre del producto (FIN para terminar): ")

# Resumen general al terminar
print("\n--- RESUMEN FINAL DE COMPRA ---")
print(f"Total productos registrados: {productos_registrados}")
print(f"Productos con descuento: {productos_con_descuento}")
print(f"Total compras (sin descuento): ${total_compras:.2f}")
print(f"Total final pagado: ${total_pagado:.2f}")