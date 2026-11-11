
/* ==== __break @ 00449969 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00449969-00449969
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


