
/* ==== __break @ 0045b48e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045b48e-0045b48e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


