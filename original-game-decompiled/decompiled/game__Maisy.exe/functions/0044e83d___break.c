
/* ==== __break @ 0044e83d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e83d-0044e83d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


