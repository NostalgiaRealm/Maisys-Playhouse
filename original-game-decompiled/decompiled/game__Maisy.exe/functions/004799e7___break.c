
/* ==== __break @ 004799e7 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799e7-004799e7
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


