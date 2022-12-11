#pragma once

void function();

// static helper();  --> you can put this here in the header data, but makes absolutely no difference. as header file meant 
// be used to provide the variables and functions in another compilation unit, but anyhow static functions can NOT be used in
// another compilation unit. therefore it make no sense to add the function declaration of static fn here.
