
/* ==== __break @ 00410769 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410769-00410769
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


