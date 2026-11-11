
/* ==== __break @ 0041515d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041515d-0041515d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


