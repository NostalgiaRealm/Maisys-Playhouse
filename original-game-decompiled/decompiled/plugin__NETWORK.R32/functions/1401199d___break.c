
/* ==== __break @ 1401199d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401199d-1401199d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


