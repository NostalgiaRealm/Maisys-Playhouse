
/* ==== __break @ 0044e83a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e83a-0044e83a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


