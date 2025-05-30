//2. Se quiere modelar la cola de un banco que atiende un solo empleado, los clientes llegan y si
//esperan más de 10 minutos se retiran. 

Procedure BANCO is
    task Empleado is
        entry AtenderCliente(D: in texto; R: out texto);
    end Empleado;
    task type cliente;
    arrClientes: array (1..N) of cliente;
task body Empleado is
    D: texto;
    R: texto;
begin
    loop
        accept atenderCliente(D: in texto; R: out texto) do
             R = Atencion(c);
        end accept;
    end loop;
end Empleado;

task body cliente is
    D: texto;
    R: texto;
begin
    SELECT
        atenderCliente(D, R);
    OR DELAY 600
        null;
    end SELECT;
end Empleado;

BEGIN
    null;
End BANCO;
