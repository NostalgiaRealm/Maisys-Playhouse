
/* ==== __break @ 00434a2d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00434a2d-00434a2d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


