
/* ==== __break @ 0043cbcf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043cbcf-0043cbcf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


