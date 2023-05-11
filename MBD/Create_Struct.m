elems(1)=Simulink.BusElement;
elems(1).Name='volt';
elems(1).DataType='uint8';


elems(2)=Simulink.BusElement;
elems(2).Name='temp';
elems(2).DataType='uint8';


elems(3)=Simulink.BusElement;
elems(3).Name='current';
elems(3).DataType='uint8';

Fault=Simulink.Bus;
Fault.Elements=elems;