
/* ==== __break @ 1401bc5f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5f-1401bc5f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


