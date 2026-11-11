
/* ==== __break @ 0045b48f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045b48f-0045b48f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


