
/* ==== __break @ 00431769 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00431769-00431769
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


