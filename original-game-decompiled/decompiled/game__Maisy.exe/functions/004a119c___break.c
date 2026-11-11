
/* ==== __break @ 004a119c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a119c-004a119c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


