
/* ==== __break @ 00448ef5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448ef5-00448ef5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


