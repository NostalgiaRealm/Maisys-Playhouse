
/* ==== __break @ 00470bc6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bc6-00470bc6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


