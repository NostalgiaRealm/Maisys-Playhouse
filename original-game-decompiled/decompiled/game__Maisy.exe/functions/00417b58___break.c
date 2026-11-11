
/* ==== __break @ 00417b58 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417b58-00417b58
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


