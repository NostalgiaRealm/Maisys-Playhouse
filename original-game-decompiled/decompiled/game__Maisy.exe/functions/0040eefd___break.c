
/* ==== __break @ 0040eefd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040eefd-0040eefd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


