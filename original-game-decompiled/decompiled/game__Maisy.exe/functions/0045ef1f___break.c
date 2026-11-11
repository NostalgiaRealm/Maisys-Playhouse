
/* ==== __break @ 0045ef1f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ef1f-0045ef1f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


