
/* ==== __break @ 0041ecbc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ecbc-0041ecbc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


