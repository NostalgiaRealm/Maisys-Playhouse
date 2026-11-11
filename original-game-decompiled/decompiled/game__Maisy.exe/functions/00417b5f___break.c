
/* ==== __break @ 00417b5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417b5f-00417b5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


