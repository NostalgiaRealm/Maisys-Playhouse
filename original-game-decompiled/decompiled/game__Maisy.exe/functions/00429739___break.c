
/* ==== __break @ 00429739 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00429739-00429739
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


