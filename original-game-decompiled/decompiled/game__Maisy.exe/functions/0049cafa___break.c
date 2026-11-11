
/* ==== __break @ 0049cafa ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049cafa-0049cafa
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


