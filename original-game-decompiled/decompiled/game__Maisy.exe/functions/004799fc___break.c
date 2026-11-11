
/* ==== __break @ 004799fc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799fc-004799fc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


