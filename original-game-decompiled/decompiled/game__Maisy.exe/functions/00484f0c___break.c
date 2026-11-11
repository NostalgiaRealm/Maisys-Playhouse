
/* ==== __break @ 00484f0c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00484f0c-00484f0c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


