
/* ==== __break @ 00484f0f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00484f0f-00484f0f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


