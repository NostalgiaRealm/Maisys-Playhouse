
/* ==== __break @ 1401bc5b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401bc5b-1401bc5b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


