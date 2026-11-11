
/* ==== __break @ 0044e58d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e58d-0044e58d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


