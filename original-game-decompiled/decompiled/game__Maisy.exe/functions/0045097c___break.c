
/* ==== __break @ 0045097c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045097c-0045097c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


