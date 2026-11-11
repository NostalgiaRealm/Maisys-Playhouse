
/* ==== __break @ 1401bc5a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5a-1401bc5a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


