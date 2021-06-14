# Automated Street Lights System
Street light control based on amount of traffic using piezoelectric crystals with Arduino UNO.

Ideal usage for roads with low traffic where keeping the street lights on at all times is not required.

# Components Used

1. arduino UNO
2. piezoelectric crystal
3. light dependent resistor (LDR)
4. resistors

# Setup 


# Modifications for practical use

Since in practical scenarios wiring different components is not applicable nor very efficient, the system needs to be modified to use wireless communication between the components and the microcontroller. We can use a WiFi module or bluetooth communication between the piezoelectric crystals and the Arduino and use the LDR as it is by choosing a good position for it near the control box where the Arduino is going to be placed.

Additional protection may be required for the LDR to prevent the epoxy from melting under direct sunlight.
