
/* ==== __break @ 004799ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799ed-004799ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


