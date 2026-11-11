
/* ==== __break @ 00448ef2 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448ef2-00448ef2
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


