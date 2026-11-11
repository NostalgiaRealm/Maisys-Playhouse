
/* ==== __break @ 0045f402 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f402-0045f402
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


